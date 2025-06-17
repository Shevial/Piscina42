FROM gitpod/workspace-full:latest

USER root

RUN sudo apt-get update && \
    sudo apt-get install build-essential -y

USER gitpod
