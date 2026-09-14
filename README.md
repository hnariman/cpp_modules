# About

Just basic cmake template to use C++20 modules
Love the syntax similar to what Rust has (no extra include/ for headers)

## notes:

Dockerfile + Makefile allow setup on any machine (with Docker/Podman installed)

### to use as template (initially created for this):
```bash
cargo generate hnariman/cpp_modules
```

### to make sure it's working:
```bash
make test-container
```


#### Tooling needed: 

[cargo](https://doc.rust-lang.org/cargo/getting-started/installation.html)

[cargo generate](https://github.com/cargo-generate/cargo-generate)

[docker](https://docs.docker.com/engine/install/)

[podman](https://podman.io/)






