#!/bin/bash

# g++ request-cpp.cpp -o request-cpp -lcpr
# g++ proxy-cpr.cpp -o proxy-cpr -lcpr
# g++ proxy-test.cpp -o proxy-test -lcpr
g++ parser.cpp -o parser -lcpr
time ./parser
