#ifndef MONITOR_CE_RESTAPI
#define MONITOR_CE_RESTAPI

enum STATUS{OK, WARNING, CRITICAL, UNKNOWN};

// Holds our response from cURL
typedef struct cURLHTTPBody {
  char* payload;
  size_t size;
} cURLHTTPBody;

#endif 
