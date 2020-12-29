/*
    This file is part of the Dynarithmic TWAIN Library (DTWAIN).
    Copyright (c) 2002-2021 Dynarithmic Software.

    Licensed under the Apache License, Version 2.0 (the "License");
    you may not use this file except in compliance with the License.
    You may obtain a copy of the License at

        http://www.apache.org/licenses/LICENSE-2.0

    Unless required by applicable law or agreed to in writing, software
    distributed under the License is distributed on an "AS IS" BASIS,
    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
    See the License for the specific language governing permissions and
    limitations under the License.

    FOR ANY PART OF THE COVERED WORK IN WHICH THE COPYRIGHT IS OWNED BY
    DYNARITHMIC SOFTWARE. DYNARITHMIC SOFTWARE DISCLAIMS THE WARRANTY OF NON INFRINGEMENT
    OF THIRD PARTY RIGHTS.
 */
#ifndef DTWSTRFN_H
#define DTWSTRFN_H

// ANSI and Wide versions of the DTWAIN functions that take 1 or more string parameters
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_AcquireFileA(DTWAIN_SOURCE Source, LPCSTR lpszFile, LONG lFileType, LONG lFileFlags, LONG PixelType, LONG lMaxPages, DTWAIN_BOOL bShowUI, DTWAIN_BOOL bCloseSource, LPLONG pStatus);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_AcquireFileW(DTWAIN_SOURCE Source, LPCWSTR lpszFile, LONG lFileType, LONG lFileFlags, LONG PixelType, LONG lMaxPages, DTWAIN_BOOL bShowUI, DTWAIN_BOOL bCloseSource, LPLONG pStatus);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_AcquireAudioFileA(DTWAIN_SOURCE Source, LPCSTR lpszFile, LONG lFileFlags, LONG lNumClips, DTWAIN_BOOL bShowUI, DTWAIN_BOOL bCloseSource, LPLONG pStatus);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_AcquireAudioFileW(DTWAIN_SOURCE Source, LPCWSTR lpszFile, LONG lFileFlags, LONG lNumClips, DTWAIN_BOOL bShowUI, DTWAIN_BOOL bCloseSource, LPLONG pStatus);

DTWAIN_BOOL DLLENTRY_DEF DTWAIN_AddFileToAppendA(LPCSTR szFile);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_AddFileToAppendW(LPCWSTR szFile);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_AddPDFTextA(DTWAIN_SOURCE Source, LPCSTR szText, LONG xPos, LONG yPos, LPCSTR fontName, DTWAIN_FLOAT fontSize, LONG colorRGB, LONG renderMode, DTWAIN_FLOAT scaling, DTWAIN_FLOAT charSpacing, DTWAIN_FLOAT wordSpacing, LONG strokeWidth, LONG Flags);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_AddPDFTextW(DTWAIN_SOURCE Source, LPCWSTR szText, LONG xPos, LONG yPos, LPCWSTR fontName, DTWAIN_FLOAT fontSize, LONG colorRGB, LONG renderMode, DTWAIN_FLOAT scaling, DTWAIN_FLOAT charSpacing, DTWAIN_FLOAT wordSpacing, LONG strokeWidth, LONG Flags);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_ArrayAddStringA(DTWAIN_ARRAY pArray, LPCSTR Val);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_ArrayAddStringNA(DTWAIN_ARRAY pArray, LPCSTR Val, LONG num);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_ArrayAddStringNW(DTWAIN_ARRAY pArray, LPCWSTR Val, LONG num);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_ArrayAddStringW(DTWAIN_ARRAY pArray, LPCWSTR Val);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_ArrayGetAtStringA(DTWAIN_ARRAY pArray, LONG nWhere, LPSTR pStr);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_ArrayGetAtStringW(DTWAIN_ARRAY pArray, LONG nWhere, LPWSTR pStr);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_ArrayInsertAtStringA(DTWAIN_ARRAY pArray, LONG nWhere, LPCSTR pVal);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_ArrayInsertAtStringNA(DTWAIN_ARRAY pArray, LONG nWhere, LPCSTR Val, LONG num);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_ArrayInsertAtStringNW(DTWAIN_ARRAY pArray, LONG nWhere, LPCWSTR Val, LONG num);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_ArrayInsertAtStringW(DTWAIN_ARRAY pArray, LONG nWhere, LPCWSTR pVal);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_ArraySetAtStringA(DTWAIN_ARRAY pArray, LONG nWhere, LPCSTR pStr);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_ArraySetAtStringW(DTWAIN_ARRAY pArray, LONG nWhere, LPCWSTR pStr);
LONG        DLLENTRY_DEF DTWAIN_GetConditionCodeStringA(LONG lError, LPSTR lpszBuffer, LONG nMaxLen);
LONG        DLLENTRY_DEF DTWAIN_GetConditionCodeStringW(LONG lError, LPWSTR lpszBuffer, LONG nMaxLen);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_EnumSourceValuesA(DTWAIN_SOURCE Source, LPCSTR capName, LPDTWAIN_ARRAY values, DTWAIN_BOOL bExpandIfRange);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_EnumSourceValuesW(DTWAIN_SOURCE Source, LPCWSTR capName, LPDTWAIN_ARRAY values, DTWAIN_BOOL bExpandIfRange);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_ExecuteOCRA(DTWAIN_OCRENGINE Engine, LPCSTR szFileName, LONG nStartPage, LONG nEndPage);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_ExecuteOCRW(DTWAIN_OCRENGINE Engine, LPCWSTR szFileName, LONG nStartPage, LONG nEndPage);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_GetAcquireArea2StringA(DTWAIN_SOURCE Source, LPSTR left, LPSTR top, LPSTR right, LPSTR bottom, LPLONG Unit);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_GetAcquireArea2StringW(DTWAIN_SOURCE Source, LPWSTR left, LPWSTR top, LPWSTR right, LPWSTR bottom, LPLONG Unit);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_GetAppInfoA(LPSTR szVerStr, LPSTR szManu, LPSTR szProdFam, LPSTR szProdName);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_GetAppInfoW(LPWSTR szVerStr, LPWSTR szManu, LPWSTR szProdFam, LPWSTR szProdName);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_GetAuthorA(DTWAIN_SOURCE Source, LPSTR szAuthor);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_GetAuthorW(DTWAIN_SOURCE Source, LPWSTR szAuthor);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_GetBrightnessStringA(DTWAIN_SOURCE Source, LPSTR Contrast);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_GetBrightnessStringW(DTWAIN_SOURCE Source, LPWSTR Contrast);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_GetCaptionA(DTWAIN_SOURCE Source, LPSTR Caption);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_GetCaptionW(DTWAIN_SOURCE Source, LPWSTR Caption);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_GetContrastStringA(DTWAIN_SOURCE Source, LPSTR Contrast);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_GetContrastStringW(DTWAIN_SOURCE Source, LPWSTR Contrast);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_GetDeviceTimeDateA(DTWAIN_SOURCE Source, LPSTR szTimeDate);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_GetDeviceTimeDateW(DTWAIN_SOURCE Source, LPWSTR szTimeDate);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_GetHalftoneA(DTWAIN_SOURCE Source, LPSTR lpHalftone, LONG GetType);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_GetHalftoneW(DTWAIN_SOURCE Source, LPWSTR lpHalftone, LONG GetType);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_GetHighlightStringA(DTWAIN_SOURCE Source, LPSTR Highlight);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_GetHighlightStringW(DTWAIN_SOURCE Source, LPWSTR Highlight);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_GetImageInfoStringA(DTWAIN_SOURCE Source, LPSTR lpXResolution, LPSTR lpYResolution, LPLONG lpWidth, LPLONG lpLength, LPLONG lpNumSamples, LPDTWAIN_ARRAY lpBitsPerSample, LPLONG lpBitsPerPixel, LPLONG lpPlanar, LPLONG lpPixelType, LPLONG lpCompression);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_GetImageInfoStringW(DTWAIN_SOURCE Source, LPWSTR lpXResolution, LPWSTR lpYResolution, LPLONG lpWidth, LPLONG lpLength, LPLONG lpNumSamples, LPDTWAIN_ARRAY lpBitsPerSample, LPLONG lpBitsPerPixel, LPLONG lpPlanar, LPLONG lpPixelType, LPLONG lpCompression);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_GetPDFTextElementStringA(DTWAIN_PDFTEXTELEMENT TextElement, LPSTR szData, LONG maxLen, LONG Flags);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_GetPDFTextElementStringW(DTWAIN_PDFTEXTELEMENT TextElement, LPWSTR szData, LONG maxLen, LONG Flags);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_GetPrinterSuffixStringA(DTWAIN_SOURCE Source, LPSTR Suffix, LONG nLength);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_GetPrinterSuffixStringW(DTWAIN_SOURCE Source, LPWSTR Suffix, LONG nLength);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_GetResolutionStringA(DTWAIN_SOURCE Source, LPSTR Resolution);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_GetResolutionStringW(DTWAIN_SOURCE Source, LPWSTR Resolution);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_GetRotationStringA(DTWAIN_SOURCE Source, LPSTR Rotation);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_GetRotationStringW(DTWAIN_SOURCE Source, LPWSTR Rotation);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_GetShadowStringA(DTWAIN_SOURCE Source, LPSTR Shadow);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_GetShadowStringW(DTWAIN_SOURCE Source, LPWSTR Shadow);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_GetThresholdStringA(DTWAIN_SOURCE Source, LPSTR Threshold);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_GetThresholdStringW(DTWAIN_SOURCE Source, LPWSTR Threshold);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_GetTimeDateA(DTWAIN_SOURCE Source, LPSTR szTimeDate);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_GetTimeDateW(DTWAIN_SOURCE Source, LPWSTR szTimeDate);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_GetTwainCountryNameA(LONG countryId, LPSTR szName);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_GetTwainCountryNameW(LONG countryId, LPWSTR szName);
LONG        DLLENTRY_DEF DTWAIN_GetTwainCountryValueA(LPCSTR country);
LONG        DLLENTRY_DEF DTWAIN_GetTwainCountryValueW(LPCWSTR country);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_GetTwainLanguageNameA(LONG lang, LPSTR szName);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_GetTwainLanguageNameW(LONG lang, LPWSTR szName);
LONG        DLLENTRY_DEF DTWAIN_GetTwainLanguageValueA(LPCSTR lang);
LONG        DLLENTRY_DEF DTWAIN_GetTwainLanguageValueW(LPCWSTR lang);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_GetXResolutionStringA(DTWAIN_SOURCE Source, LPSTR Resolution);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_GetXResolutionStringW(DTWAIN_SOURCE Source, LPWSTR Resolution);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_GetYesolutionStringA(DTWAIN_SOURCE Source, LPSTR Resolution);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_GetYesolutionStringW(DTWAIN_SOURCE Source, LPWSTR Resolution);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_InitImageFileAppendA(LPCSTR szFile, LONG fType);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_InitImageFileAppendW(LPCWSTR szFile, LONG fType);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_LoadCustomStringResourcesA(LPCSTR sLangDLL);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_LoadCustomStringResourcesW(LPCWSTR sLangDLL);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_LogMessageA(LPCSTR message);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_LogMessageW(LPCWSTR message);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_SetAcquireArea2StringA(DTWAIN_SOURCE Source, LPCSTR left, LPCSTR top, LPCSTR right, LPCSTR bottom, LONG lUnit, LONG Flags);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_SetAcquireArea2StringW(DTWAIN_SOURCE Source, LPCWSTR left, LPCWSTR top, LPCWSTR right, LPCWSTR bottom, LONG lUnit, LONG Flags);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_SetAcquireImageScaleStringA(DTWAIN_SOURCE Source, LPCSTR xscale, LPCSTR yscale);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_SetAcquireImageScaleStringW(DTWAIN_SOURCE Source, LPCWSTR xscale, LPCWSTR yscale);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_SetAppInfoA(LPCSTR szVerStr, LPCSTR szManu, LPCSTR szProdFam, LPCSTR szProdName);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_SetAppInfoW(LPCWSTR szVerStr, LPCWSTR szManu, LPCWSTR szProdFam, LPCWSTR szProdName);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_SetAuthorA(DTWAIN_SOURCE Source, LPCSTR szAuthor);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_SetAuthorW(DTWAIN_SOURCE Source, LPCWSTR szAuthor);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_SetBlankPageDetectionStringA(DTWAIN_SOURCE Source, LPCSTR threshold, LONG autodetect_option, DTWAIN_BOOL bSet);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_SetBlankPageDetectionStringW(DTWAIN_SOURCE Source, LPCWSTR threshold, LONG autodetect_option, DTWAIN_BOOL bSet);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_SetBrightnessStringA(DTWAIN_SOURCE Source, LPCSTR Contrast);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_SetBrightnessStringW(DTWAIN_SOURCE Source, LPCWSTR Contrast);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_SetCameraA(DTWAIN_SOURCE Source, LPCSTR szCamera);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_SetCameraW(DTWAIN_SOURCE Source, LPCWSTR szCamera);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_SetCaptionA(DTWAIN_SOURCE Source, LPCSTR Caption);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_SetCaptionW(DTWAIN_SOURCE Source, LPCWSTR Caption);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_SetContrastStringA(DTWAIN_SOURCE Source, LPCSTR Contrast);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_SetContrastStringW(DTWAIN_SOURCE Source, LPCWSTR Contrast);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_SetDeviceTimeDateA(DTWAIN_SOURCE Source, LPCSTR szTimeDate);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_SetDeviceTimeDateW(DTWAIN_SOURCE Source, LPCWSTR szTimeDate);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_SetDoubleFeedDetectLengthStringW(DTWAIN_SOURCE Source, LPCWSTR szLength);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_SetDoubleFeedDetectLengthStringA(DTWAIN_SOURCE Source, LPCSTR szLength);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_SetFileSavePosA(HWND hWndParent, LPCSTR szTitle, LONG xPos, LONG yPos, LONG nFlags);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_SetFileSavePosW(HWND hWndParent, LPCWSTR szTitle, LONG xPos, LONG yPos, LONG nFlags);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_SetHalftoneA(DTWAIN_SOURCE Source, LPCSTR lpHalftone);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_SetHalftoneW(DTWAIN_SOURCE Source, LPCWSTR lpHalftone);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_SetHighlightStringA(DTWAIN_SOURCE Source, LPCSTR Highlight);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_SetHighlightStringW(DTWAIN_SOURCE Source, LPCWSTR Highlight);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_SetPDFAuthorA(DTWAIN_SOURCE Source, LPCSTR lpAuthor);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_SetPDFAuthorW(DTWAIN_SOURCE Source, LPCWSTR lpAuthor);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_SetPDFCreatorA(DTWAIN_SOURCE Source, LPCSTR lpCreator);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_SetPDFCreatorW(DTWAIN_SOURCE Source, LPCWSTR lpCreator);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_SetPDFEncryptionA(DTWAIN_SOURCE Source, DTWAIN_BOOL bUseEncryption, LPCSTR lpszUser, LPCSTR lpszOwner, LONG Permissions, DTWAIN_BOOL UseStrongEncryption);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_SetPDFEncryptionW(DTWAIN_SOURCE Source, DTWAIN_BOOL bUseEncryption, LPCWSTR lpszUser, LPCWSTR lpszOwner, LONG Permissions, DTWAIN_BOOL UseStrongEncryption);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_SetPDFKeywordsA(DTWAIN_SOURCE Source, LPCSTR lpKeyWords);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_SetPDFKeywordsW(DTWAIN_SOURCE Source, LPCWSTR lpKeyWords);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_SetPDFPageScaleStringA(DTWAIN_SOURCE Source, LONG nOptions, LPCSTR xScale, LPCSTR yScale);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_SetPDFPageScaleStringW(DTWAIN_SOURCE Source, LONG nOptions, LPCWSTR xScale, LPCWSTR yScale);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_SetPDFPageSizeStringA(DTWAIN_SOURCE Source, LONG PageSize, LPCSTR CustomWidth, LPCSTR CustomHeight);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_SetPDFPageSizeStringW(DTWAIN_SOURCE Source, LONG PageSize, LPCWSTR CustomWidth, LPCWSTR CustomHeight);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_SetPDFProducerA(DTWAIN_SOURCE Source, LPCSTR lpProducer);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_SetPDFProducerW(DTWAIN_SOURCE Source, LPCWSTR lpProducer);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_SetPDFSubjectA(DTWAIN_SOURCE Source, LPCSTR lpSubject);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_SetPDFSubjectW(DTWAIN_SOURCE Source, LPCWSTR lpSubject);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_SetPDFTitleA(DTWAIN_SOURCE Source, LPCSTR lpTitle);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_SetPDFTitleW(DTWAIN_SOURCE Source, LPCWSTR lpTitle);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_SetPostScriptTitleA(DTWAIN_SOURCE Source, LPCSTR szTitle);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_SetPostScriptTitleW(DTWAIN_SOURCE Source, LPCWSTR szTitle);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_SetPrinterSuffixStringA(DTWAIN_SOURCE Source, LPCSTR Suffix);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_SetPrinterSuffixStringW(DTWAIN_SOURCE Source, LPCWSTR Suffix);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_SetResolutionStringA(DTWAIN_SOURCE Source, LPCSTR Resolution);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_SetResolutionStringW(DTWAIN_SOURCE Source, LPCWSTR Resolution);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_SetRotationStringA(DTWAIN_SOURCE Source, LPCSTR Rotation);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_SetRotationStringW(DTWAIN_SOURCE Source, LPCWSTR Rotation);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_SetSaveFileNameA(DTWAIN_SOURCE Source, LPCSTR fName);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_SetSaveFileNameW(DTWAIN_SOURCE Source, LPCWSTR fName);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_SetShadowStringA(DTWAIN_SOURCE Source, LPCSTR Shadow);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_SetShadowStringW(DTWAIN_SOURCE Source, LPCWSTR Shadow);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_SetTempFileDirectoryA(LPCSTR szFilePath);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_SetTempFileDirectoryW(LPCWSTR szFilePath);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_SetThresholdStringA(DTWAIN_SOURCE Source, LPCSTR Threshold, DTWAIN_BOOL bSetBitDepthReduction);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_SetThresholdStringW(DTWAIN_SOURCE Source, LPCWSTR Threshold, DTWAIN_BOOL bSetBitDepthReduction);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_SetTwainLogA(LONG LogFlags, LPCSTR lpszLogFile);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_SetTwainLogW(LONG LogFlags, LPCWSTR lpszLogFile);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_SetXResolutionStringA(DTWAIN_SOURCE Source, LPCSTR Resolution);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_SetXResolutionStringW(DTWAIN_SOURCE Source, LPCWSTR Resolution);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_SetYResolutionStringA(DTWAIN_SOURCE Source, LPCSTR Resolution);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_SetYResolutionStringW(DTWAIN_SOURCE Source, LPCWSTR Resolution);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_StartTwainSessionA(HWND hWndMsg, LPCSTR lpszDLLName);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_StartTwainSessionW(HWND hWndMsg, LPCWSTR lpszDLLName);
DTWAIN_HANDLE DLLENTRY_DEF DTWAIN_SysInitializeEx2A(LPCSTR szINIPath, LPCSTR szImageDLLPath, LPCSTR szLangResourcePath);
DTWAIN_HANDLE DLLENTRY_DEF DTWAIN_SysInitializeEx2W(LPCWSTR szINIPath, LPCWSTR szImageDLLPath, LPCWSTR szLangResourcePath);
DTWAIN_HANDLE DLLENTRY_DEF DTWAIN_SysInitializeExA(LPCSTR szINIPath);
DTWAIN_HANDLE DLLENTRY_DEF DTWAIN_SysInitializeExW(LPCWSTR szINIPath);
DTWAIN_HANDLE DLLENTRY_DEF DTWAIN_SysInitializeLibEx2A(HINSTANCE hInstance, LPCSTR szINIPath, LPCSTR szImageDLLPath, LPCSTR szLangResourcePath);
DTWAIN_HANDLE DLLENTRY_DEF DTWAIN_SysInitializeLibEx2W(HINSTANCE hInstance, LPCWSTR szINIPath, LPCWSTR szImageDLLPath, LPCWSTR szLangResourcePath);
DTWAIN_HANDLE DLLENTRY_DEF DTWAIN_SysInitializeLibExA(HINSTANCE hInstance, LPCSTR szINIPath);
DTWAIN_HANDLE DLLENTRY_DEF DTWAIN_SysInitializeLibExW(HINSTANCE hInstance, LPCWSTR szINIPath);
DTWAIN_OCRENGINE DLLENTRY_DEF DTWAIN_SelectOCREngineByNameA(LPCSTR lpszName);
DTWAIN_OCRENGINE DLLENTRY_DEF DTWAIN_SelectOCREngineByNameW(LPCWSTR lpszName);
DTWAIN_SOURCE DLLENTRY_DEF DTWAIN_SelectSource2A(HWND hWndParent, LPCSTR szTitle, LONG xPos, LONG yPos, LONG nOptions);
DTWAIN_SOURCE DLLENTRY_DEF DTWAIN_SelectSource2W(HWND hWndParent, LPCWSTR szTitle, LONG xPos, LONG yPos, LONG nOptions);
DTWAIN_SOURCE DLLENTRY_DEF DTWAIN_SelectSource2ExA(HWND hWndParent, LPCSTR szTitle, LONG xPos, LONG yPos, LPCSTR szIncludeNames, LPCSTR szExcludeNames, LPCSTR szNameMapping, LONG nOptions);
DTWAIN_SOURCE DLLENTRY_DEF DTWAIN_SelectSource2ExW(HWND hWndParent, LPCWSTR szTitle, LONG xPos, LONG yPos, LPCWSTR szIncludeNames, LPCWSTR szExcludeNames, LPCWSTR szNameMapping, LONG nOptions);
DTWAIN_SOURCE DLLENTRY_DEF DTWAIN_SelectSourceByNameA(LPCSTR lpszName);
DTWAIN_SOURCE DLLENTRY_DEF DTWAIN_SelectSourceByNameW(LPCWSTR lpszName);
HANDLE DLLENTRY_DEF DTWAIN_GetOCRTextA(DTWAIN_OCRENGINE Engine, LONG nPageNo, LPSTR Data, LONG dSize, LPLONG pActualSize, LONG nFlags);
HANDLE DLLENTRY_DEF DTWAIN_GetOCRTextW(DTWAIN_OCRENGINE Engine, LONG nPageNo, LPWSTR Data, LONG dSize, LPLONG pActualSize, LONG nFlags);
LONG DLLENTRY_DEF DTWAIN_ArrayFindStringA(DTWAIN_ARRAY pArray, LPCSTR pString);
LONG DLLENTRY_DEF DTWAIN_ArrayFindStringW(DTWAIN_ARRAY pArray, LPCWSTR pString);
LONG DLLENTRY_DEF DTWAIN_GetCapFromNameA(LPCSTR szName);
LONG DLLENTRY_DEF DTWAIN_GetCapFromNameW(LPCWSTR szName);
LONG DLLENTRY_DEF DTWAIN_GetCurrentFileNameA(DTWAIN_SOURCE Source, LPSTR szName, LONG MaxLen);
LONG DLLENTRY_DEF DTWAIN_GetCurrentFileNameW(DTWAIN_SOURCE Source, LPWSTR szName, LONG MaxLen);
LONG DLLENTRY_DEF DTWAIN_GetDSMFullNameA(LONG DSMType, LPSTR szDLLName, LONG nMaxLen, LPLONG pWhichSearch);
LONG DLLENTRY_DEF DTWAIN_GetDSMFullNameW(LONG DSMType, LPWSTR szDLLName, LONG nMaxLen, LPLONG pWhichSearch);
LONG DLLENTRY_DEF DTWAIN_GetErrorStringA(LONG lError, LPSTR lpszBuffer, LONG nLength);
LONG DLLENTRY_DEF DTWAIN_GetErrorStringW(LONG lError, LPWSTR lpszBuffer, LONG nLength);
LONG DLLENTRY_DEF DTWAIN_GetConditionCodeA(LONG lError, LPSTR lpszBuffer, LONG nLength);
LONG DLLENTRY_DEF DTWAIN_GetConditionCodeW(LONG lError, LPWSTR lpszBuffer, LONG nLength);
LONG DLLENTRY_DEF DTWAIN_GetExtCapFromNameA(LPCSTR szName);
LONG DLLENTRY_DEF DTWAIN_GetExtCapFromNameW(LPCWSTR szName);
LONG DLLENTRY_DEF DTWAIN_GetExtNameFromCapA(LONG nValue, LPSTR szValue, LONG nLength);
LONG DLLENTRY_DEF DTWAIN_GetExtNameFromCapW(LONG nValue, LPWSTR szValue, LONG nLength);
LONG DLLENTRY_DEF DTWAIN_GetNameFromCapA(LONG nCapValue, LPSTR szValue, LONG nLength);
LONG DLLENTRY_DEF DTWAIN_GetNameFromCapW(LONG nCapValue, LPWSTR szValue, LONG nLength);
LONG DLLENTRY_DEF DTWAIN_GetOCRErrorStringA(DTWAIN_OCRENGINE Engine, LONG lError, LPSTR lpszBuffer, LONG nMaxLen);
LONG DLLENTRY_DEF DTWAIN_GetOCRErrorStringW(DTWAIN_OCRENGINE Engine, LONG lError, LPWSTR lpszBuffer, LONG nMaxLen);
LONG DLLENTRY_DEF DTWAIN_GetOCRManufacturerA(DTWAIN_OCRENGINE Engine, LPSTR szManufacturer, LONG nLength);
LONG DLLENTRY_DEF DTWAIN_GetOCRManufacturerW(DTWAIN_OCRENGINE Engine, LPWSTR szManufacturer, LONG nLength);
LONG DLLENTRY_DEF DTWAIN_GetOCRProductFamilyA(DTWAIN_OCRENGINE Engine, LPSTR szProductFamily, LONG nLength);
LONG DLLENTRY_DEF DTWAIN_GetOCRProductFamilyW(DTWAIN_OCRENGINE Engine, LPWSTR szProductFamily, LONG nLength);
LONG DLLENTRY_DEF DTWAIN_GetOCRProductNameA(DTWAIN_OCRENGINE Engine, LPSTR szProductName, LONG nLength);
LONG DLLENTRY_DEF DTWAIN_GetOCRProductNameW(DTWAIN_OCRENGINE Engine, LPWSTR szProductName, LONG nLength);
LONG DLLENTRY_DEF DTWAIN_GetOCRVersionInfoA(DTWAIN_OCRENGINE Engine, LPSTR buffer, LONG nLength);
LONG DLLENTRY_DEF DTWAIN_GetOCRVersionInfoW(DTWAIN_OCRENGINE Engine, LPWSTR buffer, LONG nLength);
LONG DLLENTRY_DEF DTWAIN_GetPDFType1FontNameA(LONG FontVal, LPSTR szFont, LONG nChars);
LONG DLLENTRY_DEF DTWAIN_GetPDFType1FontNameW(LONG FontVal, LPWSTR szFont, LONG nChars);
LONG DLLENTRY_DEF DTWAIN_GetSaveFileNameA(DTWAIN_SOURCE Source, LPSTR fName, LONG nMaxLen);
LONG DLLENTRY_DEF DTWAIN_GetSaveFileNameW(DTWAIN_SOURCE Source, LPWSTR fName, LONG nMaxLen);
LONG DLLENTRY_DEF DTWAIN_GetSourceManufacturerA(DTWAIN_SOURCE Source, LPSTR szProduct, LONG nLength);
LONG DLLENTRY_DEF DTWAIN_GetSourceManufacturerW(DTWAIN_SOURCE Source, LPWSTR szProduct, LONG nLength);
LONG DLLENTRY_DEF DTWAIN_GetSourceProductFamilyA(DTWAIN_SOURCE Source, LPSTR szProduct, LONG nLength);
LONG DLLENTRY_DEF DTWAIN_GetSourceProductFamilyW(DTWAIN_SOURCE Source, LPWSTR szProduct, LONG nLength);
LONG DLLENTRY_DEF DTWAIN_GetSourceProductNameA(DTWAIN_SOURCE Source, LPSTR szProduct, LONG nLength);
LONG DLLENTRY_DEF DTWAIN_GetSourceProductNameW(DTWAIN_SOURCE Source, LPWSTR szProduct, LONG nLength);
LONG DLLENTRY_DEF DTWAIN_GetSourceVersionInfoA(DTWAIN_SOURCE Source, LPSTR szProduct, LONG nLength);
LONG DLLENTRY_DEF DTWAIN_GetSourceVersionInfoW(DTWAIN_SOURCE Source, LPWSTR szProduct, LONG nLength);
LONG DLLENTRY_DEF DTWAIN_GetTempFileDirectoryA(LPSTR szFilePath, LONG nLength);
LONG DLLENTRY_DEF DTWAIN_GetTempFileDirectoryW(LPWSTR szFilePath, LONG nLength);
LONG DLLENTRY_DEF DTWAIN_GetVersionInfoA(LPSTR lpszVer, LONG nLength);
LONG DLLENTRY_DEF DTWAIN_GetVersionInfoW(LPWSTR lpszVer, LONG nLength);
LONG DLLENTRY_DEF DTWAIN_GetVersionStringA(LPSTR lpszVer, LONG nLength);
LONG DLLENTRY_DEF DTWAIN_GetVersionStringW(LPWSTR lpszVer, LONG nLength);
LONG DLLENTRY_DEF DTWAIN_GetLibraryPathA(LPSTR lpszVer, LONG nLength);
LONG DLLENTRY_DEF DTWAIN_GetLibraryPathW(LPWSTR lpszVer, LONG nLength);
LONG DLLENTRY_DEF DTWAIN_GetShortVersionStringA(LPSTR lpszVer, LONG nLength);
LONG DLLENTRY_DEF DTWAIN_GetShortVersionStringW(LPWSTR lpszVer, LONG nLength);
LONG DLLENTRY_DEF DTWAIN_IsDIBBlankStringA(HANDLE hDib, LPCSTR threshold);
LONG DLLENTRY_DEF DTWAIN_IsDIBBlankStringW(HANDLE hDib, LPCWSTR threshold);

DTWAIN_BOOL DLLENTRY_DEF DTWAIN_SetDSMSearchOrderExA(LPCSTR SearchOrder, LPCSTR szUserPath);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_SetDSMSearchOrderExW(LPCWSTR SearchOrder, LPCWSTR szUserPath);

DTWAIN_BOOL DLLENTRY_DEF DTWAIN_SetResourcePathA(LPCSTR ResourcePath);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_SetResourcePathW(LPCWSTR ResourcePath);

DTWAIN_BOOL DLLENTRY_DEF DTWAIN_SetPDFTextElementStringA(DTWAIN_PDFTEXTELEMENT TextElement, LPCSTR szString, LONG Flags);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_SetPDFTextElementStringW(DTWAIN_PDFTEXTELEMENT TextElement, LPCWSTR szString, LONG Flags);

LONG DLLENTRY_DEF DTWAIN_TwainSaveA(LPCSTR cmd);
LONG DLLENTRY_DEF DTWAIN_TwainSaveW(LPCWSTR cmd);

#ifdef DTWAIN_ANSIDLL
    #define DTWAIN_CHARPTRTYPE LPSTR
    #define DTWAIN_CCHARPTRTYPE LPCSTR
    #pragma message ("Using ANSI DTWAIN DLL")
#else
#ifdef DTWAIN_UNICODEDLL
    #define DTWAIN_CHARPTRTYPE LPWSTR
    #define DTWAIN_CCHARPTRTYPE LPCWSTR
    #pragma message ("Using Unicode DTWAIN DLL")
#else
    #define DTWAIN_CHARPTRTYPE LPTSTR
    #define DTWAIN_CCHARPTRTYPE LPCTSTR
    #pragma message ("Using Platform-specific DTWAIN DLL")
#endif
#endif

//////////////////////////////////////////////////////////////////////////////////////////////////
//// These are the TCHAR versions (default to ANSI or Wide, depending on DTWAIN DLL type
DTWAIN_HANDLE  DLLENTRY_DEF      DTWAIN_SysInitializeEx(DTWAIN_CCHARPTRTYPE szINIPath);
DTWAIN_HANDLE  DLLENTRY_DEF      DTWAIN_SysInitializeEx2(DTWAIN_CCHARPTRTYPE szINIPath,
                                                          DTWAIN_CCHARPTRTYPE szImageDLLPath,
                                                          DTWAIN_CCHARPTRTYPE szLangResourcePath);
LONG           DLLENTRY_DEF      DTWAIN_GetVersionString(DTWAIN_CHARPTRTYPE lpszVer, LONG nLength);
LONG           DLLENTRY_DEF      DTWAIN_GetLibraryPath(DTWAIN_CHARPTRTYPE lpszVer, LONG nLength);
LONG           DLLENTRY_DEF      DTWAIN_GetShortVersionString(DTWAIN_CHARPTRTYPE lpszVer, LONG nLength);
LONG           DLLENTRY_DEF      DTWAIN_GetVersionInfo(DTWAIN_CHARPTRTYPE lpszVer, LONG nLength);
LONG           DLLENTRY_DEF      DTWAIN_GetErrorString(LONG lError, DTWAIN_CHARPTRTYPE lpszBuffer, LONG nMaxLen);
LONG           DLLENTRY_DEF      DTWAIN_GetConditionCodeString(LONG lError, DTWAIN_CHARPTRTYPE lpszBuffer, LONG nMaxLen);
DTWAIN_BOOL    DLLENTRY_DEF      DTWAIN_StartTwainSession(HWND hWndMsg, DTWAIN_CCHARPTRTYPE lpszDLLName);
DTWAIN_BOOL    DLLENTRY_DEF      DTWAIN_SetAppInfo(DTWAIN_CCHARPTRTYPE szVerStr, DTWAIN_CCHARPTRTYPE szManu,
                                                    DTWAIN_CCHARPTRTYPE szProdFam, DTWAIN_CCHARPTRTYPE szProdName);
DTWAIN_BOOL    DLLENTRY_DEF      DTWAIN_GetAppInfo(DTWAIN_CHARPTRTYPE szVerStr, DTWAIN_CHARPTRTYPE szManu,
                                                    DTWAIN_CHARPTRTYPE szProdFam, DTWAIN_CHARPTRTYPE szProdName);
DTWAIN_SOURCE  DLLENTRY_DEF      DTWAIN_SelectSource2(HWND hWndParent, DTWAIN_CCHARPTRTYPE szTitle,
                                                       LONG xPos, LONG yPos, LONG nOptions);
DTWAIN_SOURCE  DLLENTRY_DEF      DTWAIN_SelectSource2Ex(HWND hWndParent, DTWAIN_CCHARPTRTYPE szTitle, LONG xPos, LONG yPos,
                                                        DTWAIN_CCHARPTRTYPE szIncludeFilter,
                                                        DTWAIN_CCHARPTRTYPE szExcludeFilter,
                                                        DTWAIN_CCHARPTRTYPE szNameMapping,
                                                        LONG nOptions);
DTWAIN_SOURCE  DLLENTRY_DEF      DTWAIN_SelectSourceByName(DTWAIN_CCHARPTRTYPE lpszName);
LONG           DLLENTRY_DEF      DTWAIN_GetSourceManufacturer(DTWAIN_SOURCE Source,
                                                               DTWAIN_CHARPTRTYPE szProduct,
                                                               LONG nMaxLen);
LONG           DLLENTRY_DEF      DTWAIN_GetSourceProductFamily(DTWAIN_SOURCE Source,
                                                                DTWAIN_CHARPTRTYPE szProduct,
                                                                LONG nMaxLen);
LONG           DLLENTRY_DEF      DTWAIN_GetSourceProductName(DTWAIN_SOURCE Source,
                                                              DTWAIN_CHARPTRTYPE szProduct,
                                                              LONG nMaxLen);
LONG           DLLENTRY_DEF      DTWAIN_GetSourceVersionInfo(DTWAIN_SOURCE Source,
                                                              DTWAIN_CHARPTRTYPE szProduct,
                                                              LONG nMaxLen);
LONG           DLLENTRY_DEF      DTWAIN_GetNameFromCap(LONG nCapValue, DTWAIN_CHARPTRTYPE szValue, LONG nMaxLen );
LONG           DLLENTRY_DEF      DTWAIN_GetCapFromName( DTWAIN_CCHARPTRTYPE szName );
BOOL           DLLENTRY_DEF      DTWAIN_GetTwainCountryName(LONG countryId, DTWAIN_CHARPTRTYPE szName);

DTWAIN_ARRAY   DLLENTRY_DEF      DTWAIN_ArrayCreateFromStrings(DTWAIN_CCHARPTRTYPE* pCArray, LONG nSize);
DTWAIN_BOOL    DLLENTRY_DEF      DTWAIN_ArrayAddString(DTWAIN_ARRAY pArray, DTWAIN_CCHARPTRTYPE Val );
DTWAIN_BOOL    DLLENTRY_DEF      DTWAIN_ArrayAddStringN( DTWAIN_ARRAY pArray, DTWAIN_CCHARPTRTYPE Val, LONG num );
LONG           DLLENTRY_DEF      DTWAIN_ArrayFindString( DTWAIN_ARRAY pArray, DTWAIN_CCHARPTRTYPE pString );
DTWAIN_BOOL    DLLENTRY_DEF      DTWAIN_ArrayGetAtString(DTWAIN_ARRAY pArray, LONG nWhere, DTWAIN_CHARPTRTYPE pStr);
DTWAIN_BOOL    DLLENTRY_DEF      DTWAIN_ArrayInsertAtString(DTWAIN_ARRAY pArray, LONG nWhere, DTWAIN_CCHARPTRTYPE pVal);
DTWAIN_BOOL    DLLENTRY_DEF      DTWAIN_ArrayInsertAtStringN(DTWAIN_ARRAY pArray, LONG nWhere, DTWAIN_CCHARPTRTYPE Val, LONG num);
DTWAIN_BOOL    DLLENTRY_DEF      DTWAIN_ArraySetAtString(DTWAIN_ARRAY pArray, LONG nWhere, DTWAIN_CCHARPTRTYPE pStr);

/* Specialized ANSI/Wide array functions (these are not the same as the W/A versions of the array functions */
DTWAIN_BOOL    DLLENTRY_DEF      DTWAIN_ArrayAddWideString(DTWAIN_ARRAY pArray, LPCWSTR Val );
DTWAIN_BOOL    DLLENTRY_DEF      DTWAIN_ArrayAddANSIString(DTWAIN_ARRAY pArray, LPCSTR Val );
DTWAIN_BOOL    DLLENTRY_DEF      DTWAIN_ArrayAddWideStringN(DTWAIN_ARRAY pArray, LPCWSTR Val, LONG num );
DTWAIN_BOOL    DLLENTRY_DEF      DTWAIN_ArrayAddANSIStringN(DTWAIN_ARRAY pArray, LPCSTR Val, LONG num );
DTWAIN_BOOL    DLLENTRY_DEF      DTWAIN_ArrayGetAtWideString(DTWAIN_ARRAY pArray, LONG nWhere, LPWSTR pStr);
DTWAIN_BOOL    DLLENTRY_DEF      DTWAIN_ArrayGetAtANSIString(DTWAIN_ARRAY pArray, LONG nWhere, LPSTR pStr);
LONG           DLLENTRY_DEF      DTWAIN_ArrayFindWideString( DTWAIN_ARRAY pArray, LPCWSTR pString );
LONG           DLLENTRY_DEF      DTWAIN_ArrayFindANSIString( DTWAIN_ARRAY pArray, LPCSTR pString );
DTWAIN_BOOL    DLLENTRY_DEF      DTWAIN_ArrayInsertAtWideString(DTWAIN_ARRAY pArray, LONG nWhere, LPCWSTR pVal);
DTWAIN_BOOL    DLLENTRY_DEF      DTWAIN_ArrayInsertAtANSIString(DTWAIN_ARRAY pArray, LONG nWhere, LPCSTR pVal);
DTWAIN_BOOL    DLLENTRY_DEF      DTWAIN_ArrayInsertAtWideStringN(DTWAIN_ARRAY pArray, LONG nWhere, LPCWSTR Val, LONG num);
DTWAIN_BOOL    DLLENTRY_DEF      DTWAIN_ArrayInsertAtANSIStringN(DTWAIN_ARRAY pArray, LONG nWhere, LPCSTR Val, LONG num);
DTWAIN_BOOL    DLLENTRY_DEF      DTWAIN_ArraySetAtWideString(DTWAIN_ARRAY pArray, LONG nWhere, LPCWSTR pStr);
DTWAIN_BOOL    DLLENTRY_DEF      DTWAIN_ArraySetAtANSIString(DTWAIN_ARRAY pArray, LONG nWhere, LPCSTR pStr);

DTWAIN_BOOL    DLLENTRY_DEF      DTWAIN_AcquireFile(DTWAIN_SOURCE Source,
                                                     DTWAIN_CCHARPTRTYPE   lpszFile,
                                                     LONG     lFileType,
                                                     LONG     lFileFlags,
                                                     LONG     PixelType,
                                                     LONG     lMaxPages,
                                                     DTWAIN_BOOL bShowUI,
                                                     DTWAIN_BOOL bCloseSource,
                                                     LPLONG pStatus);
LONG           DLLENTRY_DEF      DTWAIN_GetCurrentFileName( DTWAIN_SOURCE Source, DTWAIN_CHARPTRTYPE szName, LONG MaxLen );
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_EnumSourceValues(DTWAIN_SOURCE Source, DTWAIN_CCHARPTRTYPE capName, LPDTWAIN_ARRAY values, DTWAIN_BOOL bExpandIfRange);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_SetPrinterSuffixString(DTWAIN_SOURCE Source, DTWAIN_CCHARPTRTYPE Suffix);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_GetPrinterSuffixString(DTWAIN_SOURCE Source, DTWAIN_CHARPTRTYPE Suffix, LONG nMaxLen);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_SetTwainLog(LONG LogFlags, DTWAIN_CCHARPTRTYPE lpszLogFile);
DTWAIN_HANDLE DLLENTRY_DEF  DTWAIN_SysInitializeLibEx(HINSTANCE hInstance, DTWAIN_CCHARPTRTYPE szINIPath);
DTWAIN_HANDLE DLLENTRY_DEF  DTWAIN_SysInitializeLibEx2(HINSTANCE hInstance, DTWAIN_CCHARPTRTYPE szINIPath,
                                                        DTWAIN_CCHARPTRTYPE szImageDLLPath,
                                                        DTWAIN_CCHARPTRTYPE szLangResourcePath);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_SetPDFAuthor(DTWAIN_SOURCE Source, DTWAIN_CCHARPTRTYPE lpAuthor);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_SetPDFProducer(DTWAIN_SOURCE Source, DTWAIN_CCHARPTRTYPE lpProducer);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_SetPDFCreator(DTWAIN_SOURCE Source, DTWAIN_CCHARPTRTYPE lpCreator);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_SetPDFTitle(DTWAIN_SOURCE Source, DTWAIN_CCHARPTRTYPE lpTitle);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_SetPDFSubject(DTWAIN_SOURCE Source, DTWAIN_CCHARPTRTYPE lpSubject);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_SetPDFKeywords(DTWAIN_SOURCE Source, DTWAIN_CCHARPTRTYPE lpKeyWords);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_SetPDFEncryption(DTWAIN_SOURCE Source, DTWAIN_BOOL bUseEncryption,
                                                  DTWAIN_CCHARPTRTYPE lpszUser, DTWAIN_CCHARPTRTYPE lpszOwner,
                                                  LONG Permissions, DTWAIN_BOOL UseStrongEncryption);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_SetPostScriptTitle(DTWAIN_SOURCE Source, DTWAIN_CCHARPTRTYPE szTitle);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_AddPDFText(DTWAIN_SOURCE Source,
                                            DTWAIN_CCHARPTRTYPE szText, LONG xPos, LONG yPos,
                                            DTWAIN_CCHARPTRTYPE fontName, DTWAIN_FLOAT fontSize, LONG colorRGB,
                                            LONG renderMode, DTWAIN_FLOAT scaling,
                                            DTWAIN_FLOAT charSpacing, DTWAIN_FLOAT wordSpacing,
                                            LONG strokeWidth, LONG Flags);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_GetPDFTextElementString(DTWAIN_PDFTEXTELEMENT TextElement, DTWAIN_CHARPTRTYPE szData, LONG maxLen, LONG Flags);
LONG        DLLENTRY_DEF DTWAIN_GetPDFType1FontName(LONG FontVal, DTWAIN_CHARPTRTYPE szFont, LONG nChars);
LONG DLLENTRY_DEF DTWAIN_GetExtCapFromName(DTWAIN_CCHARPTRTYPE szName);
LONG DLLENTRY_DEF DTWAIN_GetExtNameFromCap( LONG nValue, DTWAIN_CHARPTRTYPE szValue, LONG nMaxLen );
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_SetFileSavePos(HWND hWndParent, DTWAIN_CCHARPTRTYPE szTitle, LONG xPos, LONG yPos, LONG nFlags);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_LoadCustomStringResources(DTWAIN_CCHARPTRTYPE sLangDLL);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_SetTempFileDirectory(DTWAIN_CCHARPTRTYPE szFilePath);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_SetDSMSearchOrderEx(DTWAIN_CCHARPTRTYPE SearchOrder, DTWAIN_CCHARPTRTYPE UserPath);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_SetResourcePath(DTWAIN_CCHARPTRTYPE ResourcePath);
LONG DLLENTRY_DEF DTWAIN_GetTempFileDirectory(DTWAIN_CHARPTRTYPE szFilePath, LONG nMaxLen);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_SetCamera(DTWAIN_SOURCE Source, DTWAIN_CCHARPTRTYPE szCamera);
DTWAIN_BOOL DLLENTRY_DEF  DTWAIN_GetAuthor( DTWAIN_SOURCE Source, DTWAIN_CHARPTRTYPE szAuthor );
DTWAIN_BOOL DLLENTRY_DEF  DTWAIN_SetAuthor( DTWAIN_SOURCE Source, DTWAIN_CCHARPTRTYPE szAuthor );
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_GetCaption( DTWAIN_SOURCE Source, DTWAIN_CHARPTRTYPE Caption );
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_SetCaption( DTWAIN_SOURCE Source, DTWAIN_CCHARPTRTYPE Caption );
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_GetDeviceTimeDate( DTWAIN_SOURCE Source, DTWAIN_CHARPTRTYPE szTimeDate );
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_SetDeviceTimeDate( DTWAIN_SOURCE Source, DTWAIN_CCHARPTRTYPE szTimeDate );
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_GetTimeDate( DTWAIN_SOURCE Source, DTWAIN_CHARPTRTYPE szTimeDate );
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_InitImageFileAppend(DTWAIN_CCHARPTRTYPE szFile, LONG fType);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_AddFileToAppend(DTWAIN_CCHARPTRTYPE szFile);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_LogMessage(DTWAIN_CCHARPTRTYPE message);
LONG        DLLENTRY_DEF DTWAIN_TwainSave(DTWAIN_CCHARPTRTYPE cmd);
LONG   DLLENTRY_DEF DTWAIN_GetOCRVersionInfo(DTWAIN_OCRENGINE Engine, DTWAIN_CHARPTRTYPE buffer,
                                              LONG maxBufSize);
LONG   DLLENTRY_DEF DTWAIN_GetOCRProductName(DTWAIN_OCRENGINE Engine,
                                              DTWAIN_CHARPTRTYPE szProductName,
                                              LONG nMaxLen);
LONG   DLLENTRY_DEF DTWAIN_GetOCRProductFamily(DTWAIN_OCRENGINE Engine,
                                                DTWAIN_CHARPTRTYPE szProductFamily,
                                                LONG nMaxLen);
LONG   DLLENTRY_DEF DTWAIN_GetOCRManufacturer(DTWAIN_OCRENGINE Engine,
                                               DTWAIN_CHARPTRTYPE szManufacturer,
                                               LONG nMaxLen);
DTWAIN_OCRENGINE DLLENTRY_DEF DTWAIN_SelectOCREngineByName(DTWAIN_CCHARPTRTYPE lpszName);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_ExecuteOCR(DTWAIN_OCRENGINE Engine,
                                            DTWAIN_CCHARPTRTYPE szFileName,
                                            LONG nStartPage,
                                            LONG nEndPage);
HANDLE DLLENTRY_DEF DTWAIN_GetOCRText(DTWAIN_OCRENGINE Engine,
                                       LONG nPageNo,
                                       DTWAIN_CHARPTRTYPE Data,
                                       LONG dSize,
                                       LPLONG pActualSize,
                                       LONG nFlags);
LONG        DLLENTRY_DEF DTWAIN_GetDSMFullName(LONG DSMType, LPTSTR szDLLName, LONG nMaxLen, LPLONG pWhichSearch);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_GetAcquireArea2String(DTWAIN_SOURCE Source, DTWAIN_CHARPTRTYPE left, DTWAIN_CHARPTRTYPE top, DTWAIN_CHARPTRTYPE right, DTWAIN_CHARPTRTYPE bottom, LPLONG Unit);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_GetBrightnessString(DTWAIN_SOURCE Source, DTWAIN_CHARPTRTYPE Brightness);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_GetContrastString(DTWAIN_SOURCE Source, DTWAIN_CHARPTRTYPE Contrast);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_GetThresholdString(DTWAIN_SOURCE Source, DTWAIN_CHARPTRTYPE Threshold);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_GetHighlightString(DTWAIN_SOURCE Source, DTWAIN_CHARPTRTYPE Highlight);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_GetImageInfoString(DTWAIN_SOURCE Source,DTWAIN_CHARPTRTYPE lpXResolution,DTWAIN_CHARPTRTYPE lpYResolution,LPLONG lpWidth,LPLONG lpLength,LPLONG lpNumSamples,LPDTWAIN_ARRAY lpBitsPerSample,LPLONG lpBitsPerPixel,LPLONG lpPlanar,LPLONG lpPixelType,LPLONG lpCompression);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_GetResolutionString(DTWAIN_SOURCE Source, DTWAIN_CHARPTRTYPE Resolution);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_GetXResolutionString(DTWAIN_SOURCE Source, DTWAIN_CHARPTRTYPE Resolution);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_GetYResolutionString(DTWAIN_SOURCE Source, DTWAIN_CHARPTRTYPE Resolution);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_GetRotationString(DTWAIN_SOURCE Source, DTWAIN_CHARPTRTYPE Rotation);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_SetAcquireArea2String(DTWAIN_SOURCE Source, DTWAIN_CCHARPTRTYPE left, DTWAIN_CCHARPTRTYPE top, DTWAIN_CCHARPTRTYPE right, DTWAIN_CCHARPTRTYPE bottom, LONG lUnit, LONG Flags);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_SetAcquireImageScaleString(DTWAIN_SOURCE Source, DTWAIN_CCHARPTRTYPE xscale, DTWAIN_CCHARPTRTYPE yscale);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_SetBlankPageDetectionString(DTWAIN_SOURCE Source, DTWAIN_CCHARPTRTYPE threshold, LONG autodetect_option, DTWAIN_BOOL bSet);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_SetBrightnessString(DTWAIN_SOURCE Source, DTWAIN_CCHARPTRTYPE Brightness);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_SetContrastString(DTWAIN_SOURCE Source, DTWAIN_CCHARPTRTYPE Contrast);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_SetHighlightString(DTWAIN_SOURCE Source, DTWAIN_CCHARPTRTYPE Highlight);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_SetPDFPageScaleString(DTWAIN_SOURCE Source, LONG nOptions, DTWAIN_CCHARPTRTYPE xScale, DTWAIN_CCHARPTRTYPE yScale);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_SetPDFPageSizeString(DTWAIN_SOURCE Source, LONG PageSize, DTWAIN_CCHARPTRTYPE CustomWidth, DTWAIN_CCHARPTRTYPE CustomHeight);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_SetResolutionString(DTWAIN_SOURCE Source, DTWAIN_CCHARPTRTYPE Resolution);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_SetRotationString(DTWAIN_SOURCE Source, DTWAIN_CCHARPTRTYPE Rotation);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_SetXResolutionString(DTWAIN_SOURCE Source, DTWAIN_CCHARPTRTYPE Resolution);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_SetYResolutionString(DTWAIN_SOURCE Source, DTWAIN_CCHARPTRTYPE Resolution);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_SetThresholdString(DTWAIN_SOURCE Source, DTWAIN_CCHARPTRTYPE Threshold, DTWAIN_BOOL bSetBitDepthReduction);
LONG DLLENTRY_DEF DTWAIN_IsDIBBlankString(HANDLE hDib, DTWAIN_CCHARPTRTYPE threshold);
DTWAIN_FRAME DLLENTRY_DEF DTWAIN_FrameCreateString(DTWAIN_CCHARPTRTYPE Left, DTWAIN_CCHARPTRTYPE Top, DTWAIN_CCHARPTRTYPE Right, DTWAIN_CCHARPTRTYPE Bottom);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_FrameSetAllString(DTWAIN_FRAME Frame, DTWAIN_CCHARPTRTYPE Left, DTWAIN_CCHARPTRTYPE Top, DTWAIN_CCHARPTRTYPE Right, DTWAIN_CCHARPTRTYPE Bottom);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_FrameGetAllString(DTWAIN_FRAME Frame, DTWAIN_CHARPTRTYPE Left, DTWAIN_CHARPTRTYPE Top, DTWAIN_CHARPTRTYPE Right, DTWAIN_CHARPTRTYPE Bottom);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_FrameGetValueString(DTWAIN_FRAME Frame, LONG nWhich, DTWAIN_CHARPTRTYPE Value);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_FrameSetValueString(DTWAIN_FRAME Frame, LONG nWhich, DTWAIN_CCHARPTRTYPE Value);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_RangeGetValueFloatString( DTWAIN_RANGE pArray, LONG nWhich, DTWAIN_CHARPTRTYPE pVal);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_RangeSetValueFloatString( DTWAIN_RANGE pArray, LONG nWhich, DTWAIN_CCHARPTRTYPE Val);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_RangeSetAllFloatString( DTWAIN_RANGE pArray, DTWAIN_CCHARPTRTYPE dLow, DTWAIN_CCHARPTRTYPE dUp, DTWAIN_CCHARPTRTYPE dStep, DTWAIN_CCHARPTRTYPE dDefault, DTWAIN_CCHARPTRTYPE dCurrent );
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_RangeGetAllFloatString( DTWAIN_RANGE pArray, DTWAIN_CHARPTRTYPE dLow, DTWAIN_CHARPTRTYPE dUp, DTWAIN_CHARPTRTYPE dStep, DTWAIN_CHARPTRTYPE dDefault, DTWAIN_CHARPTRTYPE dCurrent );
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_RangeGetExpValueFloatString( DTWAIN_RANGE pArray, LONG lPos, DTWAIN_CHARPTRTYPE pVal );
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_RangeGetPosFloatString( DTWAIN_RANGE pArray, DTWAIN_CCHARPTRTYPE Val, LPLONG pPos );
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_RangeNearestValueFloatString( DTWAIN_RANGE pArray, DTWAIN_CCHARPTRTYPE dIn, DTWAIN_CHARPTRTYPE pOut, LONG RoundType);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_GetShadowString(DTWAIN_SOURCE Source, DTWAIN_CHARPTRTYPE Shadow);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_SetShadowString(DTWAIN_SOURCE Source, DTWAIN_CCHARPTRTYPE Shadow);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_SetSaveFileName(DTWAIN_SOURCE Source, DTWAIN_CCHARPTRTYPE fName);
LONG        DLLENTRY_DEF DTWAIN_GetSaveFileName(DTWAIN_SOURCE Source, DTWAIN_CHARPTRTYPE fName, LONG nMaxLen);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_GetHalftone(DTWAIN_SOURCE Source, DTWAIN_CHARPTRTYPE lpHalftone, LONG GetType);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_SetHalftone(DTWAIN_SOURCE Source, DTWAIN_CCHARPTRTYPE lpHalftone);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_SetDoubleFeedDetectLengthString(DTWAIN_SOURCE Source, DTWAIN_CCHARPTRTYPE value);
LONG        DLLENTRY_DEF DTWAIN_GetTwainCountryValue(DTWAIN_CCHARPTRTYPE country);
BOOL        DLLENTRY_DEF DTWAIN_GetTwainLanguageName(LONG nameId, DTWAIN_CHARPTRTYPE szName);
LONG        DLLENTRY_DEF DTWAIN_GetTwainLanguageValue(DTWAIN_CCHARPTRTYPE szName);

DTWAIN_BOOL DLLENTRY_DEF  DTWAIN_AcquireAudioFile(DTWAIN_SOURCE Source, DTWAIN_CCHARPTRTYPE lpszFile, LONG lFileFlags, LONG lMaxClips, DTWAIN_BOOL bShowUI, DTWAIN_BOOL bCloseSource,LPLONG pStatus);
LONG        DLLENTRY_DEF DTWAIN_GetOCRErrorString(DTWAIN_OCRENGINE Engine, LONG lError, DTWAIN_CHARPTRTYPE lpszBuffer, LONG nMaxLen);
DTWAIN_BOOL DLLENTRY_DEF DTWAIN_SetPDFTextElementString(DTWAIN_PDFTEXTELEMENT TextElement, DTWAIN_CCHARPTRTYPE val1, LONG Flags);

void DLLENTRY_DEF DTWAIN_X(DTWAIN_CCHARPTRTYPE s);
#endif
