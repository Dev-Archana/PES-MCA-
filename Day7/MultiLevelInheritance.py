'''
Multi Level
'''
class What_v1:
    def message(self):
        print("Text Message")
class What_v2(What_v1):
    def videoAndAudio(self):
        print("Video And Audio Chatting")
class What_v3(What_v2,What_v1):
    def payment(self):
        print("payment Method")
# Object creation 
# v1=What_v1()
# v1.message()
# v1.videoAndAudio()
print("------------------------------")
# v2=What_v2()
# v2.message()
# v2.videoAndAudio()
# v2.payment()
print("------------------------------")
v3=What_v3()
v3.message()
v3.videoAndAudio()
v3.payment()

