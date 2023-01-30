cmake -B "binary" -G "Visual Studio 16 2019"

cd "binary"

devenv "igbubble.vcxproj" /Rebuild "Release|x64"

devenv "igbobble.vcxproj" /Rebuild "Debug|x64"

cd ..
