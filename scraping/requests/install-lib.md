# Cpr Installation Guide

This guide will walk you through the installation of the C++ library "cpr" (C++ Requests) to make HTTP requests in C++.

1. **Prerequisites**:
   Ensure you have CMake installed on your system.

2. **Clone the Repository**:
   Go to /usr/lib
   Use Git to clone the cpr repository from GitHub:

   ```bash
   git clone https://github.com/whoshuu/cpr.git

   ```

3. **Compile and install Cpr**
   Naviguate to the cpr directory
   Create a build directory

   ```bash
   cmake ..
   make
   sudo make install
   ```

4. **Reload shared libraries**
   sudo ldconfig
