#!/bin/bash

# Este script corre clang-format en todos los archivos .cpp y .hh del proyecto

EXTENSIONS="cpp|hh|c|h|cc|cxx|c++|h++|hpp|ipp"

find . -regex ".*\.\($EXTENSIONS\)" -exec clang-format -i {} \;