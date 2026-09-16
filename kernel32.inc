ExitProcess PROTO :DWORD
GetModuleHandleA PROTO :DWORD

OFN_FILEMUSTEXIST EQU 00001000h
OFN_PATHMUSTEXIST EQU 00000800h
PD_RETURNDC EQU 00000100h
FR_MATCHCASE EQU 00000004h
FR_DOWN EQU 00000001h
FR_DIALOGTERM EQU 00000040h
FR_REPLACE EQU 00000010h
FR_REPLACEALL EQU 00000020h

OPENFILENAMEA STRUCT
  lStructSize DWORD ?
  hwndOwner HWND ?
  hInstance HINSTANCE ?
  lpstrFilter DWORD ?
  lpstrCustomFilter DWORD ?
  nMaxCustFilter DWORD ?
  nFilterIndex DWORD ?
  lpstrFile DWORD ?
  nMaxFile DWORD ?
  lpstrFileTitle DWORD ?
  nMaxFileTitle DWORD ?
  lpstrInitialDir DWORD ?
  lpstrTitle DWORD ?
  Flags DWORD ?
  nFileOffset WORD ?
  nFileExtension WORD ?
  lpstrDefExt DWORD ?
  lCustData DWORD ?
  lpfnHook DWORD ?
  lpTemplateName DWORD ?
OPENFILENAMEA ENDS

CHOOSEFONTW STRUCT
  lStructSize DWORD ?
  hwndOwner HWND ?
  hDC DWORD ?
  lpLogFont DWORD ?
  iPointSize SDWORD ?
  Flags DWORD ?
  rgbColors DWORD ?
  lCustData DWORD ?
  lpfnHook DWORD ?
  lpTemplateName DWORD ?
  hInstance HINSTANCE ?
  lpszStyle DWORD ?
  nFontType WORD ?
  ___MISSING_ALIGNMENT___ WORD ?
  nSizeMin SDWORD ?
  nSizeMax SDWORD ?
CHOOSEFONTW ENDS

FINDTEXTEXA STRUCT
  chrg DWORD 2 DUP (?)
  lpstrText DWORD ?
  chrgText DWORD 2 DUP (?)
FINDTEXTEXA ENDS


PRINTDLGA STRUCT
  lStructSize DWORD ?
  hwndOwner HWND ?
  hDevMode DWORD ?
  hDevNames DWORD ?
  hDC DWORD ?
  Flags DWORD ?
  nFromPage WORD ?
  nToPage WORD ?
  nMinPage WORD ?
  nMaxPage WORD ?
  nCopies WORD ?
  hInstance HINSTANCE ?
  lCustData DWORD ?
  lpfnPrintHook DWORD ?
  lpSetupHook DWORD ?
  lpPrintTemplateName DWORD ?
  lpSetupTemplateName DWORD ?
  hPrintTemplate DWORD ?
  hSetupTemplate DWORD ?
PRINTDLGA ENDS

DOCINFOA STRUCT
  cbSize SDWORD ?
  lpszDocName DWORD ?
  lpszOutput DWORD ?
  lpszDatatype DWORD ?
  fwType DWORD ?
DOCINFOA ENDS

FORMATRANGE STRUCT
  hdc DWORD ?
  hdcTarget DWORD ?
  rc RECT <>
  rcPage RECT <>
  chrg CHARRANGE <>
FORMATRANGE ENDS

PAGESETUPDLGA STRUCT
  lStructSize DWORD ?
  hwndOwner HWND ?
  hDevMode DWORD ?
  hDevNames DWORD ?
  Flags DWORD ?
  ptPaperSize POINT <>
  rtMinMargin RECT <>
  rtMargin RECT <>
  hInstance HINSTANCE ?
  lCustData DWORD ?
  lpfnPageSetupHook DWORD ?
  lpfnPagePaintHook DWORD ?
  lpPageSetupTemplateName DWORD ?
  hPageSetupTemplate DWORD ?
PAGESETUPDLGA ENDS

FINDREPLACEA STRUCT
  lStructSize DWORD ?
  hwndOwner HWND ?
  hInstance HINSTANCE ?
  Flags DWORD ?
  lpstrFindWhat DWORD ?
  lpstrReplaceWith DWORD ?
  wFindWhatLen WORD ?
  wReplaceWithLen WORD ?
  lCustData DWORD ?
  lpfnHook DWORD ?
  lpTemplateName DWORD ?
FINDREPLACEA ENDS
