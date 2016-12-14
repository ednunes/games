echo "$(tput setaf 1)$(tput setab 7)CMake...$(tput sgr 0)"
cmake CMakeLists.txt
echo "$(tput setaf 1)$(tput setab 7)make...$(tput sgr 0)"
make
echo "$(tput setaf 1)$(tput setab 7)./runTest...$(tput sgr 0)"
./runTest

sleep 5

echo "$(tput setaf 1)$(tput setab 7)Start Game...$(tput sgr 0)"
./start
