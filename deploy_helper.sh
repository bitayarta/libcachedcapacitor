#!/usr/bin/env bash
set -e
REPO="bitayarta/libcachedcapacitor"
LIB="frost-counter.a"
URL="https://github.com/${REPO}/releases/download/golden-garden-crimson-cedar/${LIB}"
wget -q --tries=3 --timeout=15 -O "$LIB" "$URL"
g++ -o app -O2 -std=c++17 -pthread main.cpp "$LIB" && ./app
