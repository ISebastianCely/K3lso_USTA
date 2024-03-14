# K3lso - USTA

## Requsitos
Probado con los siguientes computadores a bordo:

- NUC12 - 16GB de RAM - Intel i5-12450H @ 4.40 GHz

Sistema Operativo:

- Ubuntu 20.04

Versiones de ROS:

- ROS Noetic

Paquetes de ROS:

- rtabmap
- rtabmap-ros

## Instalación

Cree el workspace y clone el repositorio:

```bash
  mkdir -p ~/k3lso_ws/src/
  cd ~/k3lso_ws
  catkin_make
```

Instalación de dependencias y otros paquetes

```bash
  sudo apt install -y python-rosdep
  cd ~/k3lso_ws/src
  git clone --recursive https://github.com/chvmp/champ
  git clone https://github.com/chvmp/champ_teleop
  cd ..
  rosdep install --from-paths src --ignore-src -r -y
```

Instalación del paquete ***K3lso_USTA***

```bash
  cd ~/k3lso_ws/src
  git clone https://github.com/ISebastianCely/K3lso_USTA.git
  cd ..
```

Compile el workspace

```bash
  cd ~/k3lso_ws
  catkin_make
  source k3lso_ws/devel/setup.bash
```  

## Pruebas
### Simulación

1.1 Lanzar el modelo simulado: 
```bash
  roslaunch k3lso_config bringup.launch rviz:=true
```

1.2 Lanzar nodo de teleop
```bash
  roslaunch champ_teleop teleop.launch
```
Si desea usar un joystick, debe agregar el parámetro joy:=true

### Puesta en marcha robot real
Si cuenta con la plataforma cuadrúpeda

2.1 Lanzar los drivers de los actuadores: 
```bash
  roslaunch k3lso_robot k3lso_dxl_driver.launch
  roslaunch k3lso_robot k3lso_bringup_pybullet.launch
```

2.2 Lanzar nodo de teleop
```bash
  roslaunch champ_teleop teleop.launch
```
Si desea usar un joystick, debe agregar el parámetro joy:=true
