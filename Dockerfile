FROM ubuntu:latest
RUN apt-get update && \
    apt-get -y install g++ 
RUN apt-get -y install libstdc++5
WORKDIR /bin
COPY . /bin
RUN g++ proga.cpp -o test
CMD ["./test"]
