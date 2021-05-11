# mleak
Memory leak container for testing memory limit functionality

## Building

docker build . -t mleak:1

## Running

docker run  -m 40Mb mleak:1

## TODO

Parameterize memory allocation for controlled memory leaking
