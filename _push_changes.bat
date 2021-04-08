set file=%1
if "%file%"=="" (set file=v_006_210408)
git add .
git commit -m "%file%"
git push origin main
pause