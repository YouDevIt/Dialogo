set file=%1
if "%file%"=="" (set file=v_005_210324)
git add .
git commit -m "%file%"
git push origin main
pause