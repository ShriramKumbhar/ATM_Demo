# ATM Docker Demo

Welcome to the **ATM Docker Demo** project! This project demonstrates an ATM management system implemented in C++ and containerized using Docker. It includes features like user login, account details, and balance checking. This README provides an overview of the project, instructions for building and running the Docker container, and screenshots of the application in action.


## Building and Running the Docker Container

### Prerequisites

- **Docker**: Make sure Docker is installed and running on your machine. You can download Docker from [Docker's official site](https://www.docker.com/get-started).

### Build the Docker Image

1. Open your terminal or command prompt.
2. Navigate to the project directory:

    ```bash
    cd path/to/ATM_Docker_Demo
    ```

3. Build the Docker image:

    ```bash
    docker build -t atm_docker_demo .
    ```

### Run the Docker Container

1. Run the Docker container:

    ```bash
    docker run -it atm_docker_demo
    ```

2. You will be prompted to enter your username and password. The system will validate your credentials and display the account details and balance.

## Screenshots

Here are some screenshots of the ATM application:

1. **Execution Screen**

   ![Execution Screen](https://github.com/ShriramKumbhar/ATM_Demo/blob/main/atm_system/Screenshots/Execution.PNG)

2. **Functional Window**

   ![Functional Window](https://github.com/ShriramKumbhar/ATM_Demo/blob/main/atm_system/Screenshots/functionalWindow.PNG)

3. **Docker Desktop**

   ![Docker Desktop](https://github.com/ShriramKumbhar/ATM_Demo/blob/main/atm_system/Screenshots/dockerDesktop.PNG)

## Dockerfile Explanation

The `Dockerfile` is designed to build a Docker image for the ATM application. Here’s a brief overview of its contents:

```Dockerfile
# Use a base image
FROM ubuntu:20.04

# Install necessary packages
RUN apt-get update && apt-get install -y \
    g++ \
    make \
    cmake

# Copy source files into the container
COPY . /app

# Set the working directory
WORKDIR /app

# Build the application
RUN g++ -o ATM_Docker_Demo main.cpp atm.cpp

# Command to run the application
CMD ["./ATM_Docker_Demo"]

---

## License

This project is licensed under the [MIT License](https://opensource.org/licenses/MIT). 

## Contact

For any questions, suggestions, or feedback, please reach out to Shriram Kumbhar. You can contact me through GitHub or via email at `shriramkumbhar18@gmail.com`.

---
