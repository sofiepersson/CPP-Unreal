# CPP Unreal

This assignment consists of three separate exercises; creating a Rotator Component that makes the actor Rotate, Spawning Actors using Spawn Points and Using a Interface and a Collector Component to make objects able to be picked up. In the video below you can see the 4 smaller cubes being spawned in at the start using their Spawn Points, they are also spinning using the Rotator Component. And they are able to be picked up by the larger cube.

### Video demonstrating all features
https://github.com/sofiepersson/CPP-Unreal/assets/112477846/61454899-042c-4c32-a640-8c5536f46f90

## 

For my Spawn Manager class I chose to make it a World Subsystem because they have a managed lifetime which means they get automatically instantiated when the world is created, and automatically destroyed when the world is destroyed. Because of this I had to call the Spawn function in my level blueprint, as seen in the image below. 

![image](https://github.com/sofiepersson/CPP-Unreal/assets/112477846/2f3e1bbc-2ab9-4bbc-a608-78888700a48c)

## 

For both the Playable actor and the Pickups, all logic is done in c++ code, but they both have their own Blueprint objects to more easily be able to change their appearance and place them in the world. 

![image](https://github.com/sofiepersson/CPP-Unreal/assets/112477846/3ae85cf2-3ffc-468b-be6c-14fc1b61f01e)

## 

The Spawn Points are empty actors which have a property to know what kind of actor they are supposed to spawn, in this case it is BP_Pickup. 

![image](https://github.com/sofiepersson/CPP-Unreal/assets/112477846/8453c0f6-d1ac-4926-a4b8-a421fefbf306)
