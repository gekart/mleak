FROM alpine:edge as BUILD
RUN apk update && apk add build-base
COPY mleak.c .
RUN cc -Wall -static mleak.c -o mleak

FROM scratch
COPY --from=BUILD mleak mleak
ENTRYPOINT ["mleak"]
