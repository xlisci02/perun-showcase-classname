# perun-showcase-classname

```
# clone
git clone https://github.com/xlisci02/perun-showcase-classname
cd perun-showcase-classname

# build and run
make
time ./regex seed.txt
time ./regex worst-case-muts/worst_case3.txt

# to fuzz, first initialize as perun repo
perun init --vsc-type=git --configure

# create output directory for fuzzing
mkdir output

# fuzz example
perun fuzz -b ./regex -w seed2.txt -o output -t 900 -mp 4 -mcs unitary
```
