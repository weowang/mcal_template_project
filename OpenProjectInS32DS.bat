@echo off
setlocal EnableDelayedExpansion

set S32dsInstallPath=C:\NXP\S32DS.3.4
set projPath=%cd%
set workspacePath=%AppData%\S32DS.3.4\Workspace_WB_Examples
for %%a in ("%cd%") do set projName=%%~nxa

if not exist %workspacePath% md %workspacePath%
if not exist %workspacePath%\%projName% (
	echo 1. Copy project to workspace.
	robocopy %projPath% %workspacePath%\%projName% /E /NFL /NDL /NJH /NJS
	echo 2. Import project to workspace. Please wait, this process may need few seconds.
	%S32dsInstallPath%\eclipse\s32ds.exe -noSplash -application org.eclipse.cdt.managedbuilder.core.headlessbuild --launcher.ini %S32dsInstallPath%\eclipse\s32ds.ini -data %workspacePath% -import %workspacePath%\%projName%
	)
start "" "%workspacePath%\%projName%"
if %errorlevel% == 0 (
	echo Open S32DS.
    start %S32dsInstallPath%\eclipse\s32ds.exe -data %workspacePath%
)


