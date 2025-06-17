FROM gitpod/workspace-full:latest

USER root

RUN sudo apt-get update && \
    sudo apt-get install -y build-essential

USER gitpod
