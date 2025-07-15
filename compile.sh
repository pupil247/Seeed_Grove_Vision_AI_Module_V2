#!/bin/bash

function is_success() {
    if [ ${?} -ne 0 ];
    then
        echo "> Command failed"
        exit -1
    fi
}

cd EPII_CM55M_APP_S
make clean
is_success $?
make
is_success $?

cd ../we2_image_gen_local/
cp ../EPII_CM55M_APP_S/obj_epii_evb_icv30_bdv10/gnu_epii_evb_WLCSP65/EPII_CM55M_gnu_epii_evb_WLCSP65_s.elf input_case1_secboot/
is_success $?

./we2_local_image_gen project_case1_blp_wlcsp.json
is_success $?

cd ..
python3 xmodem/xmodem_send.py --port=/dev/ttyACM0 --baudrate=921600 --protocol=xmodem --file=we2_image_gen_local/output_case1_sec_wlcsp/output.img
is_success $?