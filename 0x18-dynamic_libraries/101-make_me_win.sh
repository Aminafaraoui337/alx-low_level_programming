#!/bin/bash
wget -P https://github.com/Aminafaraoui337/alx-low_level_programming/raw/a9cfe0f1ca741b4adae20807ff576214d44b8cc8/0x18-dynamic_libraries/libgiga.so
export LD_PRELOAD=/tmp/libgiga.so
