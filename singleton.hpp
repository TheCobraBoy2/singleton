template <typename T>
class Singleton
{
protected:
  Singleton() = default;
  ~Singleton() = default;

public:
  static T *GetInstance()
  {
    static T instance;
    return &instance;
  }

  Singleton(const Singleton &) = delete;
  void operator=(const Singleton &) = delete;
  Singleton(Singleton &&) = delete;
  void operator=(Singleton &&) = delete;
};
