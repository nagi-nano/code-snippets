#/bin/sh

if [ -n "$1" ]
then
    output=$1
else
    output="./output/"
fi

if [ ! -d $output ]
then
    mkdir $output
fi

find -name '*.rar' -exec unar {} -o $output \;
find -name '*.zip' -exec unar {} -o $output \;
find -name '*.7z' -exec unar {} -o $output \;

notify-send 'unarchive' '압축 해제 완료!' --icon=dialog-information
