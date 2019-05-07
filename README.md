# openGL

## include
```
D:\__Lib\GLFW\x86\includes;$(IncludePath)
```
## lib
```
D:\__Lib\GLFW\x86\lib;$(LibraryPath)
```

## file
```
$(ProjectDir)src\;$(ProjectDir)shaders\;$(ProjectDir)resources\;$(ProjectDir)includes\;%(AdditionalIncludeDirectories)
```
## link->input
```
opengl32.lib;glfw3.lib;assimp-vc140-mt.lib;%(AdditionalDependencies)
```
