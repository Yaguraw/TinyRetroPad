ExitProcess PROTO :DWORD
GetModuleHandleA PROTO :DWORD

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
  iPointSize LONG ?
  Flags DWORD ?
  rgbColors DWORD ?
  lCustData DWORD ?
  lpfnHook DWORD ?
  lpTemplateName DWORD ?
  hInstance HINSTANCE ?
  lpszStyle DWORD ?
  nFontType WORD ?
  ___MISSING_ALIGNMENT___ WORD ?
  nSizeMin LONG ?
  nSizeMax LONG ?
CHOOSEFONTW ENDS

FINDTEXTEXA STRUCT
  chrg DWORD 2 DUP (?)
  lpstrText DWORD ?
  chrgText DWORD 2 DUP (?)
FINDTEXTEXA ENDS

CHARRANGE STRUCT
  cpMin LONG ?
  cpMax LONG ?
CHARRANGE ENDS

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
  cbSize LONG ?
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
