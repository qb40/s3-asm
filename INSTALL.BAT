@echo off
if !%1==! goto error

echo This will install S3Asm on your S3a, connected as %1:
echo Press CTRL-C to terminate the installation, or press
echo any other key to continue.
pause
echo ÿ

:install

copy s3asm.opa %1:\app\
copy asm.als %1:\app\

mkdir %1:\asm >&nil
copy *.asm %1:\asm\

mkdir %1:\inc >&nil
copy *.inc %1:\inc\

mkdir %1:\opl >&nil
copy *.opl %1:\opl\
mkdir %1:\opo >&nil
copy *.opo %1:\opo\

goto end

:error
echo Usage: Install drive

echo ÿ
echo eg.    install m
echo        install l
:end
