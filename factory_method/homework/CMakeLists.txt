cmake_minimum_required(VERSION 3.12)

project(GameCharactersExample)

set(CMAKE_CXX_STANDARD 17)

set(SOURCES Ninja.cpp NinjaFactory.cpp Wizard.cpp WizardFactory.cpp GameCharacterFactory.cpp)

add_executable(GameCharactersExample main.cpp ${SOURCES})