set file=%1
if "%file%"=="" (set file=commit)
git add .
git commit -m "%file%"
git push origin main
pause