FROM gitpod/workspace-full

# Instala herramientas necesarias para C
RUN sudo apt update && sudo apt install -y build-essential
