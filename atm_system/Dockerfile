# Dockerfile
# Use an official C++ image as a parent image
FROM gcc:latest

# Set the working directory in the container
WORKDIR /usr/src/app

# Copy the current directory contents into the container at /usr/src/app
COPY . .

# Compile the C++ code
RUN g++ -o ATM_Docker_Demo main.cpp atm.cpp

# Run the executable
CMD ["./ATM_Docker_Demo"]
