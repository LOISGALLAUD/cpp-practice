#!/bin/sh
set -xe
# clang -o scraper scraper.cpp -lcurl
g++ -o dl-im dl-im.cpp -lcurl
