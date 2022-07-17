# Crzctl
Control your mouse in python3 using Razer Synapse 3.

*Main Repo: https://github.com/Sadmeme/rzctl*

## Dependencies
* Microsoft Visual C++ 14.0 or greater is required. 
  Get it with "[Visual Studio 2022 - Community](https://visualstudio.microsoft.com/tr/vs/community/)" and install the "Desktop development with C++" module.
* Razer Synapse 3 or greater is required.
  Get it with "[Razer Synapse 3](https://www.razer.com/synapse-3)" and install all modules.
  
  *No Razer hardware required.*

## Install Project
```python
pip install https://github.com/Gurkankaradag0/Crzctl/archive/refs/heads/main.zip
```

## Usage
```python
import Crzctl
if not Crzctl.init():
    print("init failed")
    exit(1)

Crzctl.move(100,100) # mouse will go to position 100,100.
Crzctl.click(1) # mouse left click down
Crzctl.click(2) # mouse left click up
Crzctl.click(3) # mouse left click down and up
```

## Donate
[![Build](https://www.buymeacoffee.com/assets/img/custom_images/yellow_img.png)](https://www.buymeacoffee.com/gurkankrdg)

## Social
[![Linkedin](https://img.shields.io/badge/linkedin-%230077B5.svg?&style=for-the-badge&logo=linkedin&logoColor=white)](https://www.linkedin.com/in/g%C3%BCrkan-karada%C4%9F-bb0243205/)