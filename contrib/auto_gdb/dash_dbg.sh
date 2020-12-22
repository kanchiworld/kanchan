#!/bin/bash
# use testnet settings,  if you need mainnet,  use ~/.kanchancore/dashd.pid file instead
dash_pid=$(<~/.kanchancore/testnet3/dashd.pid)
sudo gdb -batch -ex "source debug.gdb" dashd ${dash_pid}
