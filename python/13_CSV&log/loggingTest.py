import logging

# logging.debug("this is a debug message")
# logging.info("this is an info message")
# logging.warning("this is an warning message")
# logging.error("this is an error message")
# logging.critical("this is an critical message")


logger = logging.getLogger("main")
stream_hander = logging.StreamHandler()
logger.addHandler(stream_hander)

logger.setLevel(logging.DEBUG)
logger.debug("틀렸잖아!")
logger.info("확인해")
logger.warning("조심해")
logger.error("에러났어!!!")
logger.critical("망했다...")