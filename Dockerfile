FROM gcc:12
WORKDIR /app
COPY ./src /app
RUN apt update && apt install -y libboost-all-dev
RUN g++ main.cpp -o server -pthread
CMD ["./server"]
