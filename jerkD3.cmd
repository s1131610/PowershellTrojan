rem code to minimize command window from https://dnrce.com/articles/run-a-batch-script-minimized
rem %~dpnx0 means the full path name of the script,goto :EOF navs to end of file
if not "%minimized%"=="" goto :minimized
set minimized=true
start /min cmd /C "%~dpnx0"
goto :EOF
:minimized
rem end code from dnrce.com
rem the following code writes the powershell pop-up command to a temporary file called jerk.ps1,
rem and then executes that temp file using PowerShell
@echo off
echo Add-Type -AssemblyName PresentationCore,PresentationFramework   > "%TEMP%\jerk.ps1"
echo For ($i=0; $i -le 5; $i++) {                                   >> "%TEMP%\jerk.ps1"
echo     [System.Windows.MessageBox]::Show("You're a jerk")         >> "%TEMP%\jerk.ps1"
echo     }                                                          >> "%TEMP%\jerk.ps1"
PowerShell -ExecutionPolicy ByPass -File "%TEMP%\jerk.ps1"
rem pause