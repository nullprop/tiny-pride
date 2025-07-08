# tiny-pride

A pride flag .PPM generator in 321 characters of C.

(Could be 311 characters, but justified lines look nicer.)

A generated flag, converted to .PNG:

![A pride flag](./pride.png)

## Usage:

```
gcc main.c
./a.out > pride.ppm
# optionally, specify a custom size:
./a.out 800 600 > pride.ppm
```

