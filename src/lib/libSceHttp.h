#pragma once

// Params should go here....

// code goes here
// example ABI_SYSV int test(int input);
void sceHttpAbortRequest();
void sceHttpAbortRequestForce();
void sceHttpAbortWaitRequest();
void sceHttpAddCookie();
void sceHttpAddQuery();
void sceHttpAddRequestHeader();
void sceHttpAddRequestHeaderRaw();
void sceHttpAuthCacheExport();
void sceHttpAuthCacheFlush();
void sceHttpAuthCacheImport();
void sceHttpCookieExport();
void sceHttpCookieFlush();
void sceHttpCookieImport();
void sceHttpCreateConnection();
void sceHttpCreateConnectionWithURL();
void sceHttpCreateEpoll();
void sceHttpCreateRequest();
void sceHttpCreateRequest2();
void sceHttpCreateRequestWithURL();
void sceHttpCreateRequestWithURL2();
void sceHttpCreateTemplate();
void sceHttpDbgEnableProfile();
void sceHttpDbgGetConnectionStat();
void sceHttpDbgGetRequestStat();
void sceHttpDbgSetPrintf();
void sceHttpDbgShowConnectionStat();
void sceHttpDbgShowMemoryPoolStat();
void sceHttpDbgShowRequestStat();
void sceHttpDbgShowStat();
void sceHttpDeleteConnection();
void sceHttpDeleteRequest();
void sceHttpDeleteTemplate();
void sceHttpDestroyEpoll();
void sceHttpGetAcceptEncodingGZIPEnabled();
void sceHttpGetAllResponseHeaders();
void sceHttpGetAuthEnabled();
void sceHttpGetAutoRedirect();
void sceHttpGetConnectionStat();
void sceHttpGetCookie();
void sceHttpGetCookieEnabled();
void sceHttpGetCookieStats();
void sceHttpGetEpoll();
void sceHttpGetEpollId();
void sceHttpGetLastErrno();
void sceHttpGetMemoryPoolStats();
void sceHttpGetNonblock();
void sceHttpGetRegisteredCtxIds();
void sceHttpGetResponseContentLength();
void sceHttpGetStatusCode();
void sceHttpInit();
void sceHttpParseResponseHeader();
void sceHttpParseStatusLine();
void sceHttpReadData();
void sceHttpRedirectCacheFlush();
void sceHttpRemoveRequestHeader();
void sceHttpRequestGetAllHeaders();
void sceHttpsDisableOption();
void sceHttpsDisableOptionPrivate();
void sceHttpsEnableOption();
void sceHttpsEnableOptionPrivate();
void sceHttpSendRequest();
void sceHttpSetAcceptEncodingGZIPEnabled();
void sceHttpSetAuthEnabled();
void sceHttpSetAuthInfoCallback();
void sceHttpSetAutoRedirect();
void sceHttpSetChunkedTransferEnabled();
void sceHttpSetConnectTimeOut();
void sceHttpSetCookieEnabled();
void sceHttpSetCookieMaxNum();
void sceHttpSetCookieMaxNumPerDomain();
void sceHttpSetCookieMaxSize();
void sceHttpSetCookieRecvCallback();
void sceHttpSetCookieSendCallback();
void sceHttpSetCookieTotalMaxSize();
void sceHttpSetDefaultAcceptEncodingGZIPEnabled();
void sceHttpSetEpoll();
void sceHttpSetEpollId();
void sceHttpSetHttp09Enabled();
void sceHttpSetInflateGZIPEnabled();
void sceHttpSetNonblock();
void sceHttpSetPolicyOption();
void sceHttpSetPriorityOption();
void sceHttpSetProxy();
void sceHttpSetRecvBlockSize();
void sceHttpSetRecvTimeOut();
void sceHttpSetRedirectCallback();
void sceHttpSetRequestContentLength();
void sceHttpSetRequestStatusCallback();
void sceHttpSetResolveRetry();
void sceHttpSetResolveTimeOut();
void sceHttpSetResponseHeaderMaxSize();
void sceHttpSetSendTimeOut();
void sceHttpSetSocketCreationCallback();
void sceHttpsFreeCaList();
void sceHttpsGetCaList();
void sceHttpsGetSslError();
void sceHttpsLoadCert();
void sceHttpsSetMinSslVersion();
void sceHttpsSetSslCallback();
void sceHttpsSetSslVersion();
void sceHttpsUnloadCert();
void sceHttpTerm();
void sceHttpTryGetNonblock();
void sceHttpTrySetNonblock();
void sceHttpUnsetEpoll();
void sceHttpUriBuild();
void sceHttpUriCopy();
void sceHttpUriEscape();
void sceHttpUriMerge();
void sceHttpUriParse();
void sceHttpUriSweepPath();
void sceHttpUriUnescape();
void sceHttpWaitRequest();
