#include <pgmspace.h>

#define SECRET

const char ssid[] = "SSID";
const char pass[] = "PASS";

#define THINGNAME "VoltzwagenThing"

int8_t TIME_ZONE = -5; //NYC(USA): -5 UTC
//#define USE_SUMMER_TIME_DST  //uncomment to use DST

const char MQTT_HOST[] = "A1qz7xag1ojn3f-ats.iot.us-east-1.amazonaws.com";

// Obtain First CA certificate for Amazon AWS
// https://docs.aws.amazon.com/iot/latest/developerguide/managing-device-certs.html#server-authentication
// Copy contents from CA certificate here ▼
static const char cacert[] PROGMEM = R"EOF(
-----BEGIN CERTIFICATE-----
-----END CERTIFICATE-----
)EOF";

// Copy contents from XXXXXXXX-certificate.pem.crt here ▼
static const char client_cert[] PROGMEM = R"KEY(
-----BEGIN CERTIFICATE-----
-----END CERTIFICATE-----
)KEY";

// Copy contents from  XXXXXXXX-private.pem.key here ▼
static const char privkey[] PROGMEM = R"KEY(
-----BEGIN RSA PRIVATE KEY-----
-----END RSA PRIVATE KEY-----
)KEY";
