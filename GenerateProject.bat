@echo off
cd /d "%~dp0"
call vendor\bin\premake\premake5.exe vs2022
PAUSE