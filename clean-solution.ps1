Set-ExecutionPolicy -ExecutionPolicy RemoteSigned -Scope CurrentUser
Get-ChildItem *.exe -Recurse | foreach { Remove-Item -Path $_.FullName -Confirm }
Get-ChildItem *.obj -Recurse | foreach { Remove-Item -Path $_.FullName -Confirm }