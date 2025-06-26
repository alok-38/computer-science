 @echo off
cls
echo Building project...

REM Compile both source files
cl /EHsc header_files.cpp math_utils.cpp /Fe:header_files.exe

echo.
if exist header_files.exe (
    echo ✅ Build succeeded. Running program...
    echo.
    header_files.exe
) else (
    echo ❌ Build failed.
)
pause

