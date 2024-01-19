# C++ Hot Reloading Solution for Windows

## Overview
This Visual Studio solution contains two projects: `enginelib` and `hotreload`. `enginelib` is a DLL project that includes the functionalities you want to hot reload. `hotreload` is an executable project that demonstrates how to dynamically load, unload, and reload the `enginelib` DLL at runtime. This setup is particularly beneficial for C++ development on Windows, where iterative testing and development are crucial, such as in game development.

## Features
- **Dynamic DLL Loading:** Load and unload the `enginelib` DLL at runtime in the `hotreload` executable.
- **Automatic Reloading:** The `hotreload` executable watches for changes in the `enginelib` DLL and reloads it automatically.
- **Error Handling:** Implements basic error handling for file access and DLL operations.

## Requirements
- Windows Operating System
- Visual Studio 2022 or later (solution is set up and tested with Visual Studio 2022)
- C++17 Compiler (for `std::filesystem` support)

## Structure
- `enginelib`: The DLL project. Contains the code that can be hot reloaded.
- `hotreload`: The executable project. It loads the `enginelib` DLL and implements the hot reloading mechanism.

## Getting Started
1. **Clone the Repository:**
   ```bash
   git clone https://github.com/andresfelipemendez/hotreload.git
   ```

2. **Open the Solution in Visual Studio:**
   Navigate to the cloned directory and open the solution file.

3. **Build the Projects:**
   Build both the `enginelib` and `hotreload` projects within Visual Studio.

4. **Run the `hotreload` Executable:**
   Start the `hotreload` project. It will load the `enginelib` DLL.

5. **Modify and Rebuild the `enginelib` DLL:**
   Make changes to the `enginelib` project, rebuild it, and observe the `hotreload` application reloading the DLL without needing a restart.

## Usage Notes
- Ensure that both `enginelib` and `hotreload` projects are built with compatible settings (e.g., Debug/Release, x86/x64).
- The hot reloading mechanism uses simple file polling to detect DLL changes. Adjust the checking interval in the `hotreload` project as needed.
- While the example provided is basic, it's a starting point for more complex implementations, and additional error handling might be required for production-grade applications.

## Contributing
Feel free to fork this repository, make improvements, and submit pull requests. Any contributions to enhance this hot reloading solution are welcome.
