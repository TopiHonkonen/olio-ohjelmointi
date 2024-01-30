#!/bin/bash

g++ $(for i in *.cpp; do echo $i; done) -o main
