#pragma once

#ifdef __cplusplus
extern "C" {
#endif

void kissnetSend    (uint64_t sessionId, uint64_t dataBytesCount, const void * data);
void kissnetReceive (uint64_t sessionId, uint64_t * outDataBytesCount, void * outData);

#ifdef __cplusplus
}
#endif
