FROM fedora:latest
RUN dnf install -y \
    clang \
    compiler-rt \
    ninja-build \
    cmake \
    gtest-devel \
    gmock-devel \
    make \
    git
WORKDIR /workspace
