# gRPC Chat

## Motivation

Simple traffic sniffing tool that displays information about incoming and outgoing packets on chosen interface. Tailored C++17 facade layer was created over C-based pcap library, providing a clean, modern, and type-safe API for packet capture. Tool displays information in nice readable format that's very approachable for beginners providing a learning oportunity.

## Example

Below is an example of captured packets:

![TCP Example](/examples/arp_broadcast.png)
![TCP Example](/examples/dns.png)

## Features
- Message timestamps
- Colored logs

## Future Improvements

Ideas for the future:
- Storing results in a file

## Build Instructions

```bash
# Configure (Debug + tests)
cmake -S . -B build

# Build
cmake --build build -j

# Run example
./build/main
```

## Flags

```bash
Filter: -f <protocols> or --filter <protocols>
Example: ./main -f "tcp or udp"
```