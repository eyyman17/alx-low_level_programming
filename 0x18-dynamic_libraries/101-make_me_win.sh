#!/bin/bash
wget -P https://github.com/eyyman17/alx-low_level_programming/blob/master/0x18-dynamic_libraries/win_jackpot.so
export LD_PRELOAD=/pwd/win_jackpot.so
