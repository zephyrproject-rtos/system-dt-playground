#!/bin/bash

set -e

HERE=$(dirname $(realpath $0))

cd "$HERE"

set -x

lopper.py -f -O. -i lop-cpuapp.dts nrf5340_system.dts out-cpuapp.dts
lopper.py -f -O. -i lop-cpunet.dts nrf5340_system.dts out-cpunet.dts
